/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBrightnessController : NSObject {
    id /* block */  _brightnessChangedExternally;
    id /* block */  _isTracking;
}

@property (nonatomic, copy) id /* block */ brightnessChangedExternally;
@property (nonatomic, copy) id /* block */ isTracking;

+ (id)sharedController;

- (void).cxx_destruct;
- (id /* block */)brightnessChangedExternally;
- (id /* block */)isTracking;
- (void)setBrightnessChangedExternally:(id /* block */)arg1;
- (void)setIsTracking:(id /* block */)arg1;

@end
