/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMCollectionItemIDStateCapturer : EFListStateCapturer <EFListStateCapturerDelegate> {
    <EMCollectionItemIDStateCapturerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EMCollectionItemIDStateCapturerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)descriptionForItem:(id)arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2;
- (id)itemsForStateCaptureWithErrorString:(id*)arg1;
- (id)labelForStateCapture;

@end
