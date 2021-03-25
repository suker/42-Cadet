FROM debian:buster

LABEL mantainer="jubonill@student.s19.be"

# copying srcs/* to the docker context
COPY ./srcs /tmp/

# creating a directory for our server conf & permissions
RUN mkdir -p /var/www/ft_server \
	&& chown -R www-data /var/www/ft_server \
	&& chmod -R 755 /var/www/ft_server \
	&& echo "<?php phpinfo(); ?>" >> /var/www/ft_server/index.php

# Dependencies & utils: nginx, php-fpm, mariadb, wget, vim...
RUN apt-get update -y && apt-get upgrade -y \
	&& apt-get install -y nginx \
	&& apt-get install -y mariadb-server \
	&& apt-get install -y php-fpm php-common php-mbstring php-mysql \
	&& apt-get install -y wget vim

# wordpress
RUN wget https://wordpress.org/latest.tar.gz \
	&& tar -zvxf latest.tar.gz \
	&& rm -f latest.tar.gz \
	&& mv wordpress /var/www/ft_server \
	&& rm -f /var/www/ft_server/wordpress/wp-config-sample.php \
	&& mv /tmp/configs/wp-config.php /var/www/ft_server/wordpress

# phpmyadmin
RUN wget https://files.phpmyadmin.net/phpMyAdmin/5.0.4/phpMyAdmin-5.0.4-all-languages.tar.gz \
	&& tar -zvxf phpMyAdmin-5.0.4-all-languages.tar.gz \
	&& rm -f phpMyAdmin-5.0.4-all-languages.tar.gz \
	&& mv phpMyAdmin-5.0.4-all-languages phpmyadmin \
	&& mv phpmyadmin /var/www/ft_server \
	&& rm -f /var/www/ft_server/phpmyadmin/config.sample.inc.php \
	&& mv /tmp/configs/pma-config.inc.php /var/www/ft_server/phpmyadmin

# creating database for our wordpress site
RUN service mysql start && mysql -u root < /tmp/scripts/wordpress.sql

# mkcert
RUN mkdir -p /etc/nginx/ssl
RUN mv /tmp/ssl/* /etc/nginx/ssl

# removing default enabled server conf from nginx
RUN rm -f /etc/nginx/sites-enabled/*

RUN mv /tmp/configs/nginx_conf /etc/nginx/sites-available/ft_server_conf \
	&& ln -s /etc/nginx/sites-available/ft_server_conf /etc/nginx/sites-enabled

# ports to listen by our webserver 
EXPOSE 80 443

# default command for an executing container
CMD ["bash", "/tmp/scripts/init_services.sh"]
