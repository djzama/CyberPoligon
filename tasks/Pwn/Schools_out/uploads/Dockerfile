FROM alpine:3.13.1

WORKDIR /usr/src/

COPY ./entry.sh /usr/src/entry.sh
COPY ../school /usr/src/school

RUN adduser --disabled-pasword --no-create-home kuber
RUN chown kuber:kuber /usr/src/school
RUN chown kuber:kuber /usr/src/entry.sh
RUN chmod 540 /usr/src/school
RUN chmod 540 /usr/src/entry.sh

ENTRYPOINT ["/usr/src/entry.sh"]