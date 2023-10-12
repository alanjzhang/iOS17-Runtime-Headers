/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDataDetectorMatchesWithSignatureRange : NSObject {
    NSArray * _matches;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _signatureRange;
}

@property (nonatomic, retain) NSArray *matches;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } signatureRange;

- (void).cxx_destruct;
- (id)matches;
- (void)setMatches:(id)arg1;
- (void)setSignatureRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })signatureRange;

@end
