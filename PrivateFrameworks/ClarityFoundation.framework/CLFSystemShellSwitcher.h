/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClarityFoundation.framework/ClarityFoundation
 */

@interface CLFSystemShellSwitcher : NSObject {
    bool  _clarityBoardEnabled;
}

@property (getter=isClarityBoardEnabled, nonatomic) bool clarityBoardEnabled;

+ (id)sharedSystemShellSwitcher;

- (bool)_createFileWithError:(id*)arg1;
- (id)_directoryURL;
- (bool)_removeFileWithError:(id*)arg1;
- (bool)isClarityBoardEnabled;
- (void)setClarityBoardEnabled:(bool)arg1;
- (bool)setClarityBoardEnabled:(bool)arg1 error:(id*)arg2;
- (void)signalSiriAvailability;

@end