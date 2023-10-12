/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRVideoThumbnailRequestProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int thumbnailsHeight : 1; 
        unsigned int thumbnailsWidth : 1; 
    }  _has;
    float  _thumbnailsHeight;
    float  _thumbnailsWidth;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _timeIntervals;
}

@property (nonatomic) bool hasThumbnailsHeight;
@property (nonatomic) bool hasThumbnailsWidth;
@property (nonatomic) float thumbnailsHeight;
@property (nonatomic) float thumbnailsWidth;
@property (nonatomic, readonly) double*timeIntervals;
@property (nonatomic, readonly) unsigned long long timeIntervalsCount;

- (void)addTimeIntervals:(double)arg1;
- (void)clearTimeIntervals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasThumbnailsHeight;
- (bool)hasThumbnailsWidth;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasThumbnailsHeight:(bool)arg1;
- (void)setHasThumbnailsWidth:(bool)arg1;
- (void)setThumbnailsHeight:(float)arg1;
- (void)setThumbnailsWidth:(float)arg1;
- (void)setTimeIntervals:(double*)arg1 count:(unsigned long long)arg2;
- (float)thumbnailsHeight;
- (float)thumbnailsWidth;
- (double*)timeIntervals;
- (double)timeIntervalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeIntervalsCount;
- (void)writeTo:(id)arg1;

@end
