#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <jni.h>

#define PATH_SEPARATOR ':'

int main(int argc,char **argv)
{
	JavaVMOption options[1];
	JNIEnv *env;
	JavaVM *jvm;
	JavaVMInitArgs vm_args;
	long status;
	jclass cls;
	jmethodID mid;
	
	options[0].optionString = "-Djava.class.path=.";
	memset(&vm_args,0,sizeof(vm_args));
	vm_args.version = JNI_VERSION_1_2;
	vm_args.nOptions = 1;
	vm_args.options = options;
	status = JNI_CreateJavaVM(&jvm,(void **) &env,&vm_args);

	if (status != JNI_ERR) {
		cls = (*env)->FindClass(env,"Hello");
		if (cls != 0) {
			mid = (*env)->GetStaticMethodID(env,cls,"sayHello","()V");\
			if (mid != 0) {
				(*env)->CallStaticVoidMethod(env,cls,mid,NULL);
			}
		}
	}
    (*jvm)->DestroyJavaVM(jvm);
	return 0;
}

