FROM alpine:3.13.1

WORKDIR /usr/src/

COPY ./entry.sh /usr/src/entry.sh
COPY ../brain /usr/src/Eye

RUN adduser --disabled-pasword --no-create-home kuber
RUN chown kuber:kuber /usr/src/Eye
RUN chown kuber:kuber /usr/src/entry.sh
RUN chmod 540 /usr/src/Eye
RUN chmod 540 /usr/src/entry.sh

ENTRYPOINT ["/usr/src/entry.sh"]