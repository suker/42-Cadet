CREATE DATABASE wordpress;
CREATE USER wp_user@localhost IDENTIFIED BY 'wp_pw';
GRANT ALL PRIVILEGES ON *.* TO wp_user@localhost IDENTIFIED BY 'wp_pw';
GRANT ALL PRIVILEGES ON wordpress.* TO wp_user@localhost IDENTIFIED BY 'wp_pw';
FLUSH PRIVILEGES;
