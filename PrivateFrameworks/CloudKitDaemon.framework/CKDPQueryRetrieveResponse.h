/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying> {
    NSData * _continuationMarker;
    NSMutableArray * _queryResults;
}

@property (nonatomic, retain) NSData *continuationMarker;
@property (nonatomic, readonly) bool hasContinuationMarker;
@property (nonatomic, retain) NSMutableArray *queryResults;

+ (Class)queryResultsType;

- (void).cxx_destruct;
- (void)addQueryResults:(id)arg1;
- (void)clearQueryResults;
- (id)continuationMarker;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuationMarker;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryResults;
- (id)queryResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)queryResultsCount;
- (bool)readFrom:(id)arg1;
- (void)setContinuationMarker:(id)arg1;
- (void)setQueryResults:(id)arg1;
- (void)writeTo:(id)arg1;

@end
