/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWStreamConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)arg1;

- (bool)readDataWithMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)writeCloseWithCompletionHandler:(id /* block */)arg1;
- (bool)writeData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
