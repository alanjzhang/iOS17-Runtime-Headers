/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

@interface PRLikenessCacheContext : NSObject {
    unsigned long long  _cacheSize;
    bool  _circular;
    bool  _forceDecode;
    double  _scale;
}

@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic) bool circular;
@property (nonatomic) bool forceDecode;
@property (nonatomic) double scale;

+ (id)contextWithCacheSize:(unsigned long long)arg1;

- (unsigned long long)cacheSize;
- (bool)circular;
- (bool)forceDecode;
- (id)init;
- (double)scale;
- (void)setCacheSize:(unsigned long long)arg1;
- (void)setCircular:(bool)arg1;
- (void)setForceDecode:(bool)arg1;
- (void)setScale:(double)arg1;

@end
