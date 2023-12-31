/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPCSChainEnumerator : NSEnumerator {
    BRCPrivateClientZone * _clientZone;
    NSError * _error;
    BRCItemID * _itemIDNeedingListing;
    unsigned long long  _maxPathDepth;
    NSMutableArray * _stack;
}

- (void).cxx_destruct;
- (id)error;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;
- (id)itemIDNeedingListing;
- (id)nextObject;

@end
