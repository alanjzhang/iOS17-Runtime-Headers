/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBCapabilities : NSObject {
    bool  _preventOpeningSafari;
    bool  _preventURLDataDetection;
}

@property (nonatomic) bool preventOpeningSafari;
@property (nonatomic) bool preventURLDataDetection;

+ (id)sharedCapabilities;

- (bool)isWAPI;
- (bool)preventOpeningSafari;
- (bool)preventURLDataDetection;
- (void)setPreventOpeningSafari:(bool)arg1;
- (void)setPreventURLDataDetection:(bool)arg1;

@end
