/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHChatBubbleRecognitionResult : CHEllipseRecognitionResult {
    struct CGPoint { 
        double x; 
        double y; 
    }  _stemLocation;
    double  _stemWidth;
}

@property (readonly) struct CGPoint { double x1; double x2; } stemLocation;
@property (readonly) double stemWidth;

// CHChatBubbleRecognitionResult (null)

- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(struct CGPoint { double x1; double x2; })arg4 size:(struct CGSize { double x1; double x2; })arg5 stemLocation:(struct CGPoint { double x1; double x2; })arg6 stemWidth:(double)arg7;
- (struct CGPoint { double x1; double x2; })stemLocation;
- (double)stemWidth;

@end
