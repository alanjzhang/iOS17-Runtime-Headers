/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWDatagramConnection : NWConnection

+ (id)connectionWithConnectedSocket:(int)arg1;

- (bool)readDatagramsWithMinimumCount:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)writeDatagrams:(id)arg1 completionHandler:(id /* block */)arg2;

@end
