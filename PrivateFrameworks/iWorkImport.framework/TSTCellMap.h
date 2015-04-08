/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, TSTCellUIDList;

@interface TSTCellMap : TSPObject <NSCopying> {
    BOOL _appliesToHidden;
    struct vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<TSUColumnRowCoordinate *, std::__1::allocator<TSUColumnRowCoordinate> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    } _cellIDs;
    NSMutableArray *_cellLists;
    TSTCellUIDList *_cellUIDs;
    BOOL _mayModifyFormulasInCells;
    BOOL _mayModifyValuesReferencedByFormulas;
    NSMutableArray *_mergeActions;
    struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > { 
        struct TSUColumnRowRect {} *__begin_; 
        struct TSUColumnRowRect {} *__end_; 
        struct __compressed_pair<TSUColumnRowRect *, std::__1::allocator<TSUColumnRowRect> > { 
            struct TSUColumnRowRect {} *__first_; 
        } __end_cap_; 
    } _mergeIDRanges;
    struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > { 
        struct TSTCellUIDRange {} *__begin_; 
        struct TSTCellUIDRange {} *__end_; 
        struct __compressed_pair<TSTCellUIDRange *, std::__1::allocator<TSTCellUIDRange> > { 
            struct TSTCellUIDRange {} *__first_; 
        } __end_cap_; 
    } _mergeUIDRanges;
    BOOL _oneToMany;
    struct unordered_map<TSUColumnRowCoordinate, TSTCell *, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSTCell *> > > { struct __hash_table<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::__unordered_map_hasher<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::hash<TSUColumnRowCoordinate>, true>, std::__1::__unordered_map_equal<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::equal_to<TSUColumnRowCoordinate>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::hash<TSUColumnRowCoordinate>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::equal_to<TSUColumnRowCoordinate>, true> > { float x_4_2_1; } x_1_1_4; } x1; } *_searchableIDMap;
    struct unordered_map<TSTCellUID, TSTCell *, std::__1::hash<TSTCellUID>, std::__1::equal_to<TSTCellUID>, std::__1::allocator<std::__1::pair<const TSTCellUID, TSTCell *> > > { struct __hash_table<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::__unordered_map_hasher<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::hash<TSTCellUID>, true>, std::__1::__unordered_map_equal<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::equal_to<TSTCellUID>, true>, std::__1::allocator<std::__1::__hash_value_type<TSTCellUID, TSTCell *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::hash<TSTCellUID>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::equal_to<TSTCellUID>, true> > { float x_4_2_1; } x_1_1_4; } x1; } *_searchableUIDMap;
    BOOL _uidBased;
    struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > { 
        struct TSUColumnRowRect {} *__begin_; 
        struct TSUColumnRowRect {} *__end_; 
        struct __compressed_pair<TSUColumnRowRect *, std::__1::allocator<TSUColumnRowRect> > { 
            struct TSUColumnRowRect {} *__first_; 
        } __end_cap_; 
    } _unmergeIDRanges;
    struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > { 
        struct TSTCellUIDRange {} *__begin_; 
        struct TSTCellUIDRange {} *__end_; 
        struct __compressed_pair<TSTCellUIDRange *, std::__1::allocator<TSTCellUIDRange> > { 
            struct TSTCellUIDRange {} *__first_; 
        } __end_cap_; 
    } _unmergeUIDRanges;
}

@property BOOL appliesToHidden;
@property(retain) NSMutableArray * cellLists;
@property(retain) TSTCellUIDList * cellUIDs;
@property BOOL mayModifyFormulasInCells;
@property BOOL mayModifyValuesReferencedByFormulas;
@property(getter=isOneToMany,readonly) BOOL oneToMany;
@property /* Warning: unhandled struct encoding: '{unordered_map<TSUColumnRowCoordinate' */ struct * searchableIDMap; /* unknown property attribute:  true> >=f}}} */
@property struct * searchableUIDMap; /* unknown property attribute:  true> >=f}}} */
@property(getter=isUIDBased) BOOL uidBased;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCell:(id)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)addCell:(id)arg1 andCellUID:(const struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (void)addMergeAction:(id)arg1;
- (void)addMergeActions:(id)arg1;
- (void)addMergeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)addMergeRanges:(id)arg1;
- (void)addMergeUIDRange:(struct TSTCellUIDRange { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_1_1_1; struct UUIDData<TSP::UUIDData> {} *x_1_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_2_1_1; struct UUIDData<TSP::UUIDData> {} *x_2_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_2_1_3; } x2; })arg1;
- (void)addUnmergeRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)addUnmergeRanges:(id)arg1;
- (void)addUnmergeUIDRange:(struct TSTCellUIDRange { struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_1_1_1; struct UUIDData<TSP::UUIDData> {} *x_1_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_1_1_3; } x1; struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_2_1_1; struct UUIDData<TSP::UUIDData> {} *x_2_1_2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_2_1; } x_2_1_3; } x2; })arg1;
- (BOOL)appliesToHidden;
- (id)cellAtIndex:(unsigned int)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellIDAtIndex:(unsigned int)arg1;
- (id)cellIDBasedCellMapByTableInfo:(id)arg1;
- (id)cellLists;
- (id)cellMapMaskedByUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1 inRows:(BOOL)arg2;
- (id)cellUIDs;
- (id)changeDescriptorsForTable:(id)arg1;
- (void)clearMerges;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)columnUIDs;
- (BOOL)containsMergeChanges;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)enumerateCellsWithIDsUsingBlock:(id)arg1;
- (void)enumerateCellsWithUIDsUsingBlock:(id)arg1;
- (id)findCellForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)findCellForCellUID:(const struct TSTCellUID { struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_1_1_1; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 cell:(id)arg2 cellIDList:(const struct vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<TSUColumnRowCoordinate *, std::__1::allocator<TSUColumnRowCoordinate> > { struct { /* ? */ } *x_3_1_1; } x3; }*)arg3;
- (id)initWithContext:(id)arg1 cell:(id)arg2 cellUIDList:(id)arg3;
- (id)initWithContext:(id)arg1 uidBased:(BOOL)arg2;
- (BOOL)isOneToMany;
- (BOOL)isUIDBased;
- (id)iterator;
- (BOOL)mayModifyFormulasInCells;
- (BOOL)mayModifyValuesReferencedByFormulas;
- (id)mergeActions;
- (id)mergeRegionMap;
- (const struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > { struct TSTCellUIDRange {} *x1; struct TSTCellUIDRange {} *x2; struct __compressed_pair<TSTCellUIDRange *, std::__1::allocator<TSTCellUIDRange> > { struct TSTCellUIDRange {} *x_3_1_1; } x3; }*)mergeUIDRanges;
- (id)p_addCell:(id)arg1;
- (id)p_cellAtIndex:(unsigned int)arg1 inCellListArray:(id)arg2;
- (unsigned int)p_cellCount;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(id)arg1;
- (void)p_resolveUUIDsToCellIDsByTableInfo:(id)arg1;
- (void)popLastCell;
- (void)remapUIDsByColumnMap:(const struct TSUUuidMap { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg1 rowMap:(const struct TSUUuidMap { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg2 ownerMap:(const struct TSUUuidMap { struct __hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<TSUUUID>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg3;
- (const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)rowUIDs;
- (void)saveToArchiver:(id)arg1;
- (struct unordered_map<TSUColumnRowCoordinate, TSTCell *, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSTCell *> > > { struct __hash_table<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::__unordered_map_hasher<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::hash<TSUColumnRowCoordinate>, true>, std::__1::__unordered_map_equal<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::equal_to<TSUColumnRowCoordinate>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::hash<TSUColumnRowCoordinate>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::equal_to<TSUColumnRowCoordinate>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)searchableIDMap;
- (struct unordered_map<TSTCellUID, TSTCell *, std::__1::hash<TSTCellUID>, std::__1::equal_to<TSTCellUID>, std::__1::allocator<std::__1::pair<const TSTCellUID, TSTCell *> > > { struct __hash_table<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::__unordered_map_hasher<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::hash<TSTCellUID>, true>, std::__1::__unordered_map_equal<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::equal_to<TSTCellUID>, true>, std::__1::allocator<std::__1::__hash_value_type<TSTCellUID, TSTCell *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::hash<TSTCellUID>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::equal_to<TSTCellUID>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)searchableUIDMap;
- (void)setAppliesToHidden:(BOOL)arg1;
- (void)setCellLists:(id)arg1;
- (void)setCellUIDs:(id)arg1;
- (void)setMayModifyFormulasInCells:(BOOL)arg1;
- (void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1;
- (void)setSearchableIDMap:(struct unordered_map<TSUColumnRowCoordinate, TSTCell *, std::__1::hash<TSUColumnRowCoordinate>, std::__1::equal_to<TSUColumnRowCoordinate>, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSTCell *> > > { struct __hash_table<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::__unordered_map_hasher<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::hash<TSUColumnRowCoordinate>, true>, std::__1::__unordered_map_equal<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::equal_to<TSUColumnRowCoordinate>, true>, std::__1::allocator<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::hash<TSUColumnRowCoordinate>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSUColumnRowCoordinate, std::__1::__hash_value_type<TSUColumnRowCoordinate, TSTCell *>, std::__1::equal_to<TSUColumnRowCoordinate>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg1;
- (void)setSearchableUIDMap:(struct unordered_map<TSTCellUID, TSTCell *, std::__1::hash<TSTCellUID>, std::__1::equal_to<TSTCellUID>, std::__1::allocator<std::__1::pair<const TSTCellUID, TSTCell *> > > { struct __hash_table<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::__unordered_map_hasher<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::hash<TSTCellUID>, true>, std::__1::__unordered_map_equal<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::equal_to<TSTCellUID>, true>, std::__1::allocator<std::__1::__hash_value_type<TSTCellUID, TSTCell *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<TSTCellUID, TSTCell *>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::hash<TSTCellUID>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<TSTCellUID, std::__1::__hash_value_type<TSTCellUID, TSTCell *>, std::__1::equal_to<TSTCellUID>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg1;
- (void)setUidBased:(BOOL)arg1;
- (id)unmergeRegionMap;
- (const struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > { struct TSTCellUIDRange {} *x1; struct TSTCellUIDRange {} *x2; struct __compressed_pair<TSTCellUIDRange *, std::__1::allocator<TSTCellUIDRange> > { struct TSTCellUIDRange {} *x_3_1_1; } x3; }*)unmergeUIDRanges;
- (id)uuidBasedCellMapByTableInfo:(id)arg1;

@end