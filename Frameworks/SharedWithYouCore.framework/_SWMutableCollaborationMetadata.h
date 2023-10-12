/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SharedWithYouCore.framework/SharedWithYouCore
 */

@interface _SWMutableCollaborationMetadata : _SWCollaborationMetadata

@property (nonatomic, copy) NSArray *defaultOptions;
@property (nonatomic, copy) _SWCollaborationShareOptions *defaultShareOptions;
@property (nonatomic, copy) NSString *initiatorHandle;
@property (nonatomic, retain) NSPersonNameComponents *initiatorNameComponents;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollaborationIdentifier:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
