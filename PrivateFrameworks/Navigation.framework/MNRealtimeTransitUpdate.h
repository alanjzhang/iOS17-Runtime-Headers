/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRealtimeTransitUpdate : MNRealtimeUpdate <NSSecureCoding> {
    GEOTransitRouteUpdate * _transitUpdate;
}

@property (nonatomic, readonly) GEOTransitRouteUpdate *transitUpdate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransitRouteUpdate:(id)arg1;
- (id)routeID;
- (id)transitUpdate;

@end
