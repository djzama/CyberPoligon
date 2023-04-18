FROM alpine:3.13.1

WORKDIR /usr/src/

COPY ./entry.sh /usr/src/entry.sh
COPY ./brain /usr/src/heart

RUN adduser --disabled-pasword --no-create-home kuber
RUN chown kuber:kuber /usr/src/heart
RUN chown kuber:kuber /usr/src/entry.sh
RUN chmod 540 /usr/src/heart
RUN chmod 540 /usr/src/entry.sh

ENTRYPOINT ["/usr/src/entry.sh"]