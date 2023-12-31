/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFRingBuffer : HMFObject {
    NSMutableArray * _buffer;
    unsigned long long  _capacity;
}

@property (readonly) NSMutableArray *buffer;
@property (readonly) unsigned long long capacity;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)buffer;
- (unsigned long long)capacity;
- (bool)containsObject:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;

@end
