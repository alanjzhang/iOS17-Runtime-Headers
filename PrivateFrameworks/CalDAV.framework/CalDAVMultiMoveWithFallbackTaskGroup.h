/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup {
    NSMutableDictionary * _destinationEntityScheduleTags;
    bool  _isAutoScheduleSupported;
    NSDictionary * _sourceEntityScheduleTags;
}

@property (nonatomic, retain) NSMutableDictionary *destinationEntityScheduleTags;
@property (nonatomic) bool isAutoScheduleSupported;
@property (nonatomic, retain) NSDictionary *sourceEntityScheduleTags;

- (void).cxx_destruct;
- (void)_completedPropFindTask:(id)arg1 intermediateETag:(id)arg2 intermediateScheduleTag:(id)arg3 destinationFilename:(id)arg4;
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)destinationEntityScheduleTags;
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(bool)arg3 useFallback:(bool)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 sourceEntityScheduleTags:(id)arg8 accountInfoProvider:(id)arg9 taskManager:(id)arg10 isAutoScheduleSupported:(bool)arg11;
- (bool)isAutoScheduleSupported;
- (void)setDestinationEntityScheduleTags:(id)arg1;
- (void)setIsAutoScheduleSupported:(bool)arg1;
- (void)setSourceEntityScheduleTags:(id)arg1;
- (id)sourceEntityScheduleTags;

@end
