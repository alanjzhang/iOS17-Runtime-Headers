/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNObservableContractTerminationContext : NSObject {
    NSArray * _callStack;
    unsigned long long  _threadId;
}

@property (readonly, copy) NSArray *callStack;
@property (readonly) unsigned long long threadId;

+ (id)currentContext;
+ (unsigned long long)currentThreadId;

- (void).cxx_destruct;
- (id)callStack;
- (id)initWithCallStack:(id)arg1 threadId:(unsigned long long)arg2;
- (unsigned long long)threadId;

@end
