#!/bin/bash

# check nginx conf
nginx -t

# start services and bash
service nginx restart
service mysql restart
service php7.3-fpm start
bash
