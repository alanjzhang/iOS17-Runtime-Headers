/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextSearchingFindSessionAggregator : NSObject <UITextSearchAggregator> {
    UITextSearchingFindSession * _session;
    bool  _valid;
}

@property (nonatomic, readonly) NSOrderedSet *allFoundRanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextSearchingFindSession *session;
@property (readonly) Class superclass;
@property (getter=isValid) bool valid;

- (void).cxx_destruct;
- (void)_performOnMainIfValid:(id /* block */)arg1;
- (id)allFoundRanges;
- (void)finishedSearching;
- (void)foundRange:(id)arg1 forSearchString:(id)arg2 inDocument:(id)arg3;
- (id)initWithSession:(id)arg1;
- (void)invalidate;
- (void)invalidateFoundRange:(id)arg1 inDocument:(id)arg2;
- (bool)isValid;
- (id)session;
- (void)setValid:(bool)arg1;

@end
