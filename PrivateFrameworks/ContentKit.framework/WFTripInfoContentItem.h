/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFTripInfoContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFTripInfo *tripInfo;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (id)arrivalTime;
- (id)distance;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (id)routeName;
- (id)travelTime;
- (id)tripInfo;

@end