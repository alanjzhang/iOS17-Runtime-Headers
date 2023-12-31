/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFAssertionPolicyComposite : NSObject <PFAssertionPolicyHandler> {
    NSMutableArray * _policies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *policies;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPolicy:(id)arg1;
- (id)init;
- (void)notifyAssertion:(id)arg1;
- (id)policies;

@end
