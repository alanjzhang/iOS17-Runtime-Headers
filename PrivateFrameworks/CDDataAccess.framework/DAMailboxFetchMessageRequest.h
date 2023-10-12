/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxFetchMessageRequest : DAMailboxRequest {
    int  _maxSize;
}

@property (nonatomic) int maxSize;

- (id)description;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;
- (bool)isEqual:(id)arg1;
- (int)maxSize;
- (void)setMaxSize:(int)arg1;

@end
