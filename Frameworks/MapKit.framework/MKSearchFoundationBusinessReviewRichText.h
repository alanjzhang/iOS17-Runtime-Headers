/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText {
    bool  _reviewResolved;
}

@property (getter=isReviewResolved) bool reviewResolved;

- (bool)isReviewResolved;
- (bool)isRichTextResolved;
- (void)resolveReviewStringWithProviderNameByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3;
- (void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3;
- (void)setReviewResolved:(bool)arg1;

@end
