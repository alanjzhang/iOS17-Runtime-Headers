/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface UnitRank : NSObject {
    id  _context;
    NSLocale * _locale;
    float  _rank;
    int  _unitID;
}

@property (nonatomic, retain) id context;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) float rank;
@property (nonatomic) int unitID;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)context;
- (id)description;
- (unsigned long long)hash;
- (id)initWithUnitID:(int)arg1 rank:(float)arg2 locale:(id)arg3;
- (id)initWithUnitID:(int)arg1 rank:(float)arg2 locale:(id)arg3 context:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (float)rank;
- (void)setContext:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setRank:(float)arg1;
- (void)setUnitID:(int)arg1;
- (int)unitID;

@end
