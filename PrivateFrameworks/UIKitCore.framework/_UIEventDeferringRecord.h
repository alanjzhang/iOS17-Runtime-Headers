/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIEventDeferringRecord : NSObject <BSDebugDescriptionProviding> {
    _UIEventDeferringOwnershipToken * _deferringToken;
    _UIEventDeferringDescriptor * _descriptor;
    <BSInvalidatable> * _invalidationToken;
    void * _recordingManagerPointer;
    NSMutableSet * _recreationReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
