/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapAccessLine : NSObject <GEOMapLine> {
    struct vector<GEOLocationCoordinate2D, std::allocator<GEOLocationCoordinate2D>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<GEOLocationCoordinate2D *, std::allocator<GEOLocationCoordinate2D>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _coordinates;
    struct shared_ptr<geo::MapEdge> { 
        struct MapEdge {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _edge;
    GEOMapAccess * _map;
}

@property (nonatomic, readonly) unsigned long long coordinateCount;
@property (nonatomic, readonly) struct { double x1; double x2; }*coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double length;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)coordinateCount;
- (struct { double x1; double x2; }*)coordinates;
- (double)distanceFromCoordinate:(struct { double x1; double x2; })arg1 outSegmentCoordinate:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg2;
- (id)initWithMap:(id)arg1 edge:(struct shared_ptr<geo::MapEdge> { struct MapEdge {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (double)length;

@end
