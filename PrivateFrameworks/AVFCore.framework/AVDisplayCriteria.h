/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVDisplayCriteria : NSObject <NSCopying> {
    AVDisplayCriteriaInternal * _displayCriteria;
    float  _refreshRate;
    int  _videoDynamicRange;
}

@property (nonatomic, readonly) float refreshRate;
@property (readonly) int videoDynamicRange;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithRefreshRate:(float)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2;
- (bool)isEqual:(id)arg1;

// AVDisplayCriteria (AVDisplayCriteriaPrivate)

- (id)initWithRefreshRate:(float)arg1 videoDynamicRange:(int)arg2;
- (float)refreshRate;
- (int)videoDynamicRange;

@end
