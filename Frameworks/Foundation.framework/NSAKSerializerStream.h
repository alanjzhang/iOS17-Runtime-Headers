/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKSerializerStream : NSObject <NSSerializerStream> {
    unsigned long long  current;
    unsigned long long  max;
    void * memory;
    struct __CFDictionary { } * roomForIntLocations;
}

- (void)copySerializationInto:(void*)arg1;
- (void)dealloc;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
- (unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2;
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
- (unsigned long long)writeInt:(unsigned long long)arg1;
- (unsigned long long)writeRoomForInt:(int*)arg1;
- (bool)writeToPath:(id)arg1 safely:(bool)arg2;

@end
