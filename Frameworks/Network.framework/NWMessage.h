/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWMessage : NSObject {
    NSObject<OS_dispatch_data> * _internalContent;
    NSObject<OS_nw_content_context> * _internalContext;
}

@property (nonatomic, retain) NSObject<OS_dispatch_data> *internalContent;
@property (nonatomic, retain) NSObject<OS_nw_content_context> *internalContext;

- (void).cxx_destruct;
- (id)initWithContent:(id)arg1 context:(id)arg2;
- (id)internalContent;
- (id)internalContext;
- (void)setInternalContent:(id)arg1;
- (void)setInternalContext:(id)arg1;

@end
