/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHotspotHelperCommand : NSObject {
    struct __CNPluginCommand { } * _command;
}

@property (readonly) long long commandType;
@property (readonly) NEHotspotNetwork *network;
@property (readonly) NSArray *networkList;

- (long long)commandType;
- (id)createResponse:(long long)arg1;
- (id)createTCPConnection:(id)arg1;
- (id)createUDPSession:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)network;
- (id)networkList;

@end
