/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcretePipe : NSPipe {
    NSFileHandle * _readHandle;
    NSFileHandle * _writeHandle;
}

- (void)_closeOnDealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;
- (id)init;

@end
