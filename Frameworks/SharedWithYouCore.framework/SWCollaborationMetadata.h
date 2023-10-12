/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SharedWithYouCore.framework/SharedWithYouCore
 */

@interface SWCollaborationMetadata : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray * _ckAppBundleIDs;
    NSString * _collaborationIdentifier;
    CKContainerSetupInfo * _containerSetupInfo;
    UTType * _contentType;
    NSDate * _creationDate;
    NSArray * _defaultOptions;
    SWCollaborationShareOptions * _defaultShareOptions;
    NSDictionary * _handleToIdentityMap;
    NSString * _initiatorHandle;
    NSPersonNameComponents * _initiatorNameComponents;
    NSString * _localIdentifier;
    NSString * _originatingBundleIdentifier;
    NSData * _sourceProcessData;
    NSString * _title;
    NSArray * _userSelectedOptions;
    SWCollaborationShareOptions * _userSelectedShareOptions;
}

@property (nonatomic, copy) NSArray *ckAppBundleIDs;
@property (nonatomic, copy) NSString *collaborationIdentifier;
@property (nonatomic, retain) CKContainerSetupInfo *containerSetupInfo;
@property (nonatomic, readonly, copy) UTType *contentType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, copy) NSArray *defaultOptions;
@property (nonatomic, copy) SWCollaborationShareOptions *defaultShareOptions;
@property (nonatomic, copy) NSDictionary *handleToIdentityMap;
@property (nonatomic, copy) NSString *initiatorHandle;
@property (nonatomic, retain) NSPersonNameComponents *initiatorNameComponents;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, retain) NSString *originatingBundleIdentifier;
@property (nonatomic, retain) NSData *sourceProcessData;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *userSelectedOptions;
@property (nonatomic, copy) SWCollaborationShareOptions *userSelectedShareOptions;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultShareOptions:(id)arg4 defaultOptions:(id)arg5 creationDate:(id)arg6 contentType:(id)arg7 initiatorHandle:(id)arg8 initiatorNameComponents:(id)arg9 ckAppBundleIDs:(id)arg10 handleToIdentityMap:(id)arg11 containerSetupInfo:(id)arg12 sourceProcessData:(id)arg13;
- (id)ckAppBundleIDs;
- (id)collaborationIdentifier;
- (id)containerSetupInfo;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)defaultOptions;
- (id)defaultShareOptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handleToIdentityMap;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollaborationIdentifier:(id)arg1;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6 initiatorHandle:(id)arg7 initiatorNameComponents:(id)arg8;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 containerSetupInfo:(id)arg6;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 initiatorHandle:(id)arg6 initiatorNameComponents:(id)arg7;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 initiatorHandle:(id)arg4 initiatorNameComponents:(id)arg5;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultOptions:(id)arg3 initiatorHandle:(id)arg4 initiatorNameComponents:(id)arg5 containerSetupInfo:(id)arg6;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 ckAppBundleIDs:(id)arg6 initiatorHandle:(id)arg7 initiatorNameComponents:(id)arg8;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 initiatorHandle:(id)arg6 initiatorNameComponents:(id)arg7;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 creationDate:(id)arg4 contentType:(id)arg5 initiatorHandle:(id)arg6 initiatorNameComponents:(id)arg7 containerSetupInfo:(id)arg8 sourceProcessData:(id)arg9;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 initiatorHandle:(id)arg4 initiatorNameComponents:(id)arg5;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 initiatorHandle:(id)arg4 initiatorNameComponents:(id)arg5 containerSetupInfo:(id)arg6;
- (id)initWithCollaborationIdentifier:(id)arg1 title:(id)arg2 defaultShareOptions:(id)arg3 initiatorHandle:(id)arg4 initiatorNameComponents:(id)arg5 containerSetupInfo:(id)arg6 sourceProcessData:(id)arg7;
- (id)initWithLocalIdentifier:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultOptions:(id)arg4;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultOptions:(id)arg4 creationDate:(id)arg5 contentType:(id)arg6 ckAppBundleIDs:(id)arg7;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultOptions:(id)arg4 creationDate:(id)arg5 contentType:(id)arg6 ckAppBundleIDs:(id)arg7 initiatorHandle:(id)arg8 initiatorNameComponents:(id)arg9;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultOptions:(id)arg4 initiatorHandle:(id)arg5 initiatorNameComponents:(id)arg6;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultShareOptions:(id)arg4;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultShareOptions:(id)arg4 creationDate:(id)arg5 contentType:(id)arg6 ckAppBundleIDs:(id)arg7;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultShareOptions:(id)arg4 creationDate:(id)arg5 contentType:(id)arg6 ckAppBundleIDs:(id)arg7 initiatorHandle:(id)arg8 initiatorNameComponents:(id)arg9;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultShareOptions:(id)arg4 creationDate:(id)arg5 contentType:(id)arg6 ckAppBundleIDs:(id)arg7 initiatorHandle:(id)arg8 initiatorNameComponents:(id)arg9 containerSetupInfo:(id)arg10 sourceProcessData:(id)arg11;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultShareOptions:(id)arg4 defaultOptions:(id)arg5 creationDate:(id)arg6 contentType:(id)arg7 initiatorHandle:(id)arg8 initiatorNameComponents:(id)arg9 ckAppBundleIDs:(id)arg10 handleToIdentityMap:(id)arg11 containerSetupInfo:(id)arg12 sourceProcessData:(id)arg13;
- (id)initWithLocalIdentifier:(id)arg1 collaborationIdentifier:(id)arg2 title:(id)arg3 defaultShareOptions:(id)arg4 initiatorHandle:(id)arg5 initiatorNameComponents:(id)arg6;
- (id)initiatorHandle;
- (id)initiatorNameComponents;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCollaborationMetadata:(id)arg1;
- (id)localIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originatingBundleIdentifier;
- (void)setCkAppBundleIDs:(id)arg1;
- (void)setCollaborationIdentifier:(id)arg1;
- (void)setContainerSetupInfo:(id)arg1;
- (void)setDefaultOptions:(id)arg1;
- (void)setDefaultShareOptions:(id)arg1;
- (void)setHandleToIdentityMap:(id)arg1;
- (void)setInitiatorHandle:(id)arg1;
- (void)setInitiatorNameComponents:(id)arg1;
- (void)setOriginatingBundleIdentifier:(id)arg1;
- (void)setSourceProcessData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserSelectedOptions:(id)arg1;
- (void)setUserSelectedShareOptions:(id)arg1;
- (id)sourceProcessData;
- (id)title;
- (id)userSelectedOptions;
- (id)userSelectedShareOptions;

@end
