/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIEventDeferringOwnershipToken : NSObject <BSDebugDescriptionProviding> {
    NSSet * _environments;
    NSMutableSet * _environmentsPendingInvalidation;
    bool  _hasInvalidated;
    NSString * _ownerClass;
    void * _ownerPointer;
    long long  _owningInterfaceElementCategory;
    NSString * _reason;
    unsigned long long  _scope;
    BKSHIDEventDeferringTarget * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
