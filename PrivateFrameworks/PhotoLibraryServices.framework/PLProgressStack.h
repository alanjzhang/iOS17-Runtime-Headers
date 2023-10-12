/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLProgressStack : NSObject {
    float  currentMultiplier;
    float  currentTotal;
    id  delegate;
    NSString * mediaPathString;
    NSMutableArray * multipliers;
    bool  notifyUsingAssetsdNotificationCenter;
}

@property (nonatomic) float currentMultiplier;
@property (nonatomic) float currentTotal;
@property (nonatomic) id delegate;
@property (nonatomic, retain) NSString *mediaPathString;
@property (nonatomic, retain) NSMutableArray *multipliers;
@property (nonatomic) bool notifyUsingAssetsdNotificationCenter;

+ (id)unarchiveFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)archiveToDictionary;
- (float)currentMultiplier;
- (float)currentTotal;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)mediaPathString;
- (id)multipliers;
- (bool)notifyUsingAssetsdNotificationCenter;
- (void)pop;
- (void)popAndUpdate;
- (void)push:(float)arg1;
- (void)setCurrentMediaPath:(id)arg1;
- (void)setCurrentMultiplier:(float)arg1;
- (void)setCurrentTotal:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaPathString:(id)arg1;
- (void)setMultipliers:(id)arg1;
- (void)setNotifyUsingAssetsdNotificationCenter:(bool)arg1;
- (float)totalProgress:(float)arg1;
- (void)updateProgress:(float)arg1;

@end
