/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UISUIActivityExtensionItemDataRequest : NSObject <NSSecureCoding> {
    long long  _activityCategory;
    NSDictionary * _activitySpecificMetadata;
    bool  _activitySupportsPromiseURLs;
    NSString * _activityType;
    NSUUID * _activityUUID;
    Class  _classForPreparingExtensionItemData;
    NSString * _extensionIdentifier;
    bool  _isAirDropActivity;
    long long  _maxPreviews;
    bool  _sourceAppIsManaged;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    bool  _wantsAttachmentURLItemData;
    bool  _wantsThumbnailItemData;
}

@property (nonatomic) long long activityCategory;
@property (nonatomic, retain) NSDictionary *activitySpecificMetadata;
@property (nonatomic) bool activitySupportsPromiseURLs;
@property (nonatomic, retain) NSString *activityType;
@property (nonatomic, retain) NSUUID *activityUUID;
@property (nonatomic, readonly) Class classForPreparingExtensionItemData;
@property (nonatomic) NSString *extensionIdentifier;
@property (nonatomic) bool isAirDropActivity;
@property (nonatomic) long long maxPreviews;
@property (nonatomic) bool sourceAppIsManaged;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;
@property (nonatomic) bool wantsAttachmentURLItemData;
@property (nonatomic) bool wantsThumbnailItemData;

+ (id)requestForActivity:(id)arg1 activityType:(id)arg2;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 activitySpecificMetadata:(id)arg3;
+ (id)requestForActivity:(id)arg1 activityType:(id)arg2 sourceAppIsManaged:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithClassForPreparingExtensionItemData:(Class)arg1;
- (long long)activityCategory;
- (id)activitySpecificMetadata;
- (bool)activitySupportsPromiseURLs;
- (id)activityType;
- (id)activityUUID;
- (Class)classForPreparingExtensionItemData;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isAirDropActivity;
- (long long)maxPreviews;
- (void)setActivityCategory:(long long)arg1;
- (void)setActivitySpecificMetadata:(id)arg1;
- (void)setActivitySupportsPromiseURLs:(bool)arg1;
- (void)setActivityType:(id)arg1;
- (void)setActivityUUID:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setIsAirDropActivity:(bool)arg1;
- (void)setMaxPreviews:(long long)arg1;
- (void)setSourceAppIsManaged:(bool)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWantsAttachmentURLItemData:(bool)arg1;
- (void)setWantsThumbnailItemData:(bool)arg1;
- (bool)sourceAppIsManaged;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (bool)wantsAttachmentURLItemData;
- (bool)wantsThumbnailItemData;

@end
