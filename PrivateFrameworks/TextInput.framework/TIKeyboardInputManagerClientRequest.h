/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardInputManagerClientRequest : NSObject {
    unsigned long long  _errorCount;
    NSInvocation * _invocation;
}

@property (nonatomic) unsigned long long errorCount;
@property (nonatomic, readonly) NSInvocation *invocation;

+ (id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(bool)arg2;

- (void).cxx_destruct;
- (unsigned long long)errorCount;
- (id)init;
- (id)initWithInvocation:(id)arg1;
- (id)invocation;
- (void)setErrorCount:(unsigned long long)arg1;

@end
