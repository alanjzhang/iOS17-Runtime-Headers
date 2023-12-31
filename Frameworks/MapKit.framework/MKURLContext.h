/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKURLContext : NSObject {
    GEOCompanionRouteContext * _companionRouteContext;
    bool  _originatedFromWatch;
}

@property (nonatomic, readonly, copy) GEOCompanionRouteContext *companionRouteContext;
@property (nonatomic, readonly) bool originatedFromWatch;

- (void).cxx_destruct;
- (id)companionRouteContext;
- (id)initWithOriginatedFromWatch:(bool)arg1 companionRouteContext:(id)arg2;
- (bool)originatedFromWatch;

@end
