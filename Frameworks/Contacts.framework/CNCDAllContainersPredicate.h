/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate> {
    bool  _includeDisabledContainers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeDisabledContainers;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeDisabledContainers;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncludeDisabledContainers:(bool)arg1;
- (void)setIncludeDisabledContainers:(bool)arg1;

@end
