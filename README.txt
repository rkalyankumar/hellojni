Compilation:
gcc -o hellojvm -L /usr/lib/jvm/java-8-oracle/jre/lib/amd64/server/ -I /usr/lib/jvm/java-8-oracle/include/ -I /usr/lib/jvm/java-8-oracle/include/linux/ hellojvm.c -ljvm

Before running hellojvm executable LD_LIBRARY_PATH should be set as below:
	export LD_LIBRARY_PATH=/usr/lib/jvm/java-8-oracle/jre/lib/amd64/server/:$LD_LIBRARY_PATH

References:
	https://docs.oracle.com/javase/8/docs/technotes/guides/jni/spec/invocation.html
	http://www.codeproject.com/Articles/22881/How-to-Call-Java-Functions-from-C-Using-JNI
	http://www.ibm.com/developerworks/java/tutorials/j-jni/j-jni.html
	http://hildstrom.com/projects/jni/index.html
