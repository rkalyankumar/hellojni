all:	clean
	gcc -o hellojvm -L /usr/lib/jvm/java-8-oracle/jre/lib/amd64/server/ -I /usr/lib/jvm/java-8-oracle/include/ -I /usr/lib/jvm/java-8-oracle/include/linux/ hellojvm.c -ljvm
clean:
	rm -rf hellojvm
