/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices
 */

@interface SRCSPhraseMatchResult : NSObject {
    <SRCSTextMarkerRangeProtocol> * _markerRange;
    NSString * _matchedString;
    id  _userInfo;
}

@property (readonly) <SRCSTextMarkerRangeProtocol> *markerRange;
@property (readonly) NSString *matchedString;
@property (retain) id userInfo;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMarkerRange:(id)arg1 matchedString:(id)arg2 userInfo:(id)arg3;
- (long long)location;
- (id)markerRange;
- (id)matchedString;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
