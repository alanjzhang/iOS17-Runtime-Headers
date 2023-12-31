/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STUsageDetailItem : NSObject {
    NSString * _identifier;
    float  _quantity;
    long long  _type;
    bool  _usageTrusted;
}

@property (readonly, copy) NSString *identifier;
@property (readonly) bool isAllAppsOrCategories;
@property (nonatomic) float quantity;
@property (readonly) float sortQuantity;
@property long long type;
@property (readonly) bool usageTrusted;

+ (id)keyPathsForValuesAffectingIsAllAppsOrCategories;
+ (id)keyPathsForValuesAffectingSortQuantity;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithType:(long long)arg1 identifier:(id)arg2;
- (id)initWithType:(long long)arg1 identifier:(id)arg2 usageTrusted:(bool)arg3;
- (bool)isAllAppsOrCategories;
- (bool)isEqual:(id)arg1;
- (float)quantity;
- (void)setQuantity:(float)arg1;
- (void)setType:(long long)arg1;
- (float)sortQuantity;
- (long long)type;
- (bool)usageTrusted;

@end
