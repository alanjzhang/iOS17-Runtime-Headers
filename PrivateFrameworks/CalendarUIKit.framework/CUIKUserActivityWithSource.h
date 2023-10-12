/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    NSString * _sourceHost;
    NSString * _sourceOwner;
    long long  _sourceType;
}

- (void).cxx_destruct;
- (bool)_isLocalSource;
- (bool)_requiresHostAndOwner;
- (bool)_supportsConsistentExternalIDAcrossDevices;
- (bool)_supportsConsistentExternalIDAcrossDevices:(long long)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)isMatchForSource:(id)arg1;

@end
