/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface _SGNSStringEncodingEnumerator : NSEnumerator <NSFastEnumeration> {
    unsigned long long  _encoding;
    bool  _needsBOM;
    bool  _needsNullTermination;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _remaining;
    NSString * _string;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithString:(id)arg1 encoding:(unsigned long long)arg2 nullTerminated:(bool)arg3;
- (id)nextObject;
- (id)nullTerminationIfNeeded;

@end
