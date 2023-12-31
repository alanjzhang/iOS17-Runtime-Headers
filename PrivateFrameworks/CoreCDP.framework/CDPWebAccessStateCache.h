/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPWebAccessStateCache : NSObject {
    bool  _isValid;
    unsigned long long  _webAccessStatus;
}

@property bool isValid;
@property unsigned long long webAccessStatus;

+ (id)sharedInstance;

- (id)init;
- (bool)isValid;
- (void)setIsValid:(bool)arg1;
- (void)setWebAccessStatus:(unsigned long long)arg1;
- (unsigned long long)webAccessStatus;

@end
