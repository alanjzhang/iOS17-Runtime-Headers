/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGChatLengthEstimator : NSObject {
    NSMutableData * _backingData;
    unsigned short * _countPtr;
    int  _fd;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSString * _path;
    char * _sketch;
}

@property (readonly) unsigned long long count;
@property (readonly) NSString *path;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)dealloc;
- (unsigned long long)estimateMessagesInChat:(id)arg1;
- (id)init;
- (id)initInMemory;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)recordMessageInChat:(id)arg1;

@end
