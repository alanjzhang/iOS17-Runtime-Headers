/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSThreadData : NSObject {
    id  _argument;
    SEL  _selector;
    id  _target;
    struct _opaque_pthread_attr_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  attr;
    unsigned char  cancel;
    double  defpri;
    id  dict;
    id  name;
    NSMutableDictionary * performD;
    id  performQ;
    double  pri;
    BOOL  qos;
    unsigned char  qstate;
    int  seqNum;
    _Atomic unsigned char  status;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * tid;
}

- (id)init;

@end
