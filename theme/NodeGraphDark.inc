#include "NodeGraphCommon.inc"

#define BG                      #0d0d0d
#define RED                     1 0 0
#define SELECTION               #2a2a2a
#define LINES                   #262626
#define NODETEXT                #cfcfcf
#define DISPLAYFLG              #4d82ff
#define NODECOMMENTTEXT         #cfcfcf
#define HOUCOLOR                #ff4e00
#define HOUCOLORSELECT          #ff8830
#define HOUBYPASS               #6a2fff
#define HOUCOLORSELECTNODE      #ff5e1a
#define HOUCOLORSELECTNODESECONDARY  #ff7033
#define HOUCOLORSELECTNODLAST   #ff2688
#define WIRECUT                 #ffffff

#define FLAGBGON                #171717
#define FLAGBGOFF               #101010

#define GREY(g)                 g g g
#define TEXT                    GREY(0.8)

PaletteBackground:             LINES
PaletteSelected:               HOUCOLORSELECT
ShapePaletteShape:             GREY(0.8)

BackgroundImageLocate:         WHITE
BackgroundImageBorder:         YELLOW
BackgroundImageBrightness:     YELLOW
BackgroundImageLink:           GREY(0.8)

GraphOverlayLeftText:          #cfcfcf
GraphOverlayCenterText:        #b5b5b5
GraphOverlayRightText:         WHITE

GraphBackground:               #0d0d0d
GraphOverviewBackground:       #111111
GraphOverviewViewRegion:       #303030
GraphOverviewBorder:           BLACK
GraphPromptText:               #cfcfcf
GraphGridLines:                #202020
GraphGridPoints:               #2b2b2b

GraphNameText:                 #cfcfcf
GraphNodeTypeText:             #6f6f6f
GraphCommentText:              #cfcfcf
GraphDescriptiveNameText:      #b8b8b8
GraphContextOptionDepsText:    #9c9c9c
GraphLopLastModifiedPrimText:  #9c9c9c
GraphLopLayerCountText:        #9c9c9c
GraphOutputForViewText:        #9c9c9c
GraphDetailIdText:             #9c9c9c
GraphNetworkBoxText:           #cfcfcf
GraphNetworkBoxTextDark:       #2a2a2a
GraphNetworkBoxNameText:       #b8b8b8
GraphIndirectText:             WHITE
GraphIndirectTextDark:         BLACK
GraphTagsText:                 #9c9c9c

GraphItemBorder:               BLACK
GraphMinimizeButton:           #b5b5b5

GraphTemplateFlag:             #DD7DD7
GraphSelectableTemplateFlag:   #B151BB
GraphBypassFlag:               #6a2fff
GraphRenderFlag:               #4d82ff
GraphDisplayFlag:              #4d82ff
GraphOutputFlag:               #ff4e00
GraphSelectableFlag:           #7a7a7a
GraphExportFlag:               #8a8a8a
GraphHiddenFlag:               #707070
GraphAudioFlag:                #666666
GraphThumbnailFlag:            #6a6a6a
GraphLockFlag:                 #8a5a5a
GraphSoftLockFlag:             #7a7a5a
GraphDebugFlag:                #a0a0a0
GraphMaterialFlag:             #8a8a8a
GraphDisplayAndRenderFlag:     #00ADFF
GraphDisplayAndOutputFlag:     #9a9a9a
GraphFilterFlag:               #7a7a7a

GraphDisplayHighlight:         #4a4a4a
GraphExportHighlight:          #555555
GraphRenderHighlight:          #555555
GraphOutputHighlight:          #666666
GraphTemplateHighlight:        #707070
GraphFilterHighlight:          #5f5f5f

GraphDopObjectData:            0.65 0.65 0.65
GraphDopData:                  0.50 0.80 0.50
GraphDopRelData:               0.20 0.60 0.20
GraphDopSolverData:            0.7 0.5 0.9
GraphDopAnyData:               0.9 0.9 0.9
GraphSopHeightfield:           #7a7a7a
GraphSopConstraints:           #7a7a7a
GraphSopDomain:                #7a7a7a
GraphSopRestGeometry:          #8a8a8a
GraphSopCapturePose:           #7a7a7a
GraphSopAnimatedPose:          #8a8a8a
GraphSopCharacterStream:       #7a7a7a

GraphConnector:                #ffffff
GraphConnectorLabel:           #ffffff
GraphConnectorError:           #ff6b6b
GraphCop2MaskInput:            #ffffff

GraphWire:                     #7f7f7f
GraphWireUnused:               #404040
GraphWireError:                #ff4d4d
GraphWireLoopBack:             #ffb000
GraphWireSelection:            #ffff00
GraphWireNodeSelection:        #ffff00
GraphWireLongFaded:            #5a5a5a
GraphWireLongerFaded:          #4a4a4a
GraphWireStub:                 #d0d0d0
GraphWireStubSelection:        #ffff00
GraphWireCut:                  #ff4d4d
GraphWireCutPath:              #ffff00
GraphWireStitchStart:          #ffff00
GraphWireStitchEnd:            #ffff00
GraphSpareWire:                #cfcfcf
GraphParmOverrideWire:         #ffb347

GraphDependency:               #d0d0d0
GraphDependencyEndAffector:    #8a8a8a
GraphDependencyExternalIn:     #ffff00
GraphDependencyExternalOut:    #ffff00

GraphPickFill:                 #5a5a5a
GraphPreSelection:             #8a8a8a
GraphItemCurrent:              #181818
GraphItemCurrentNonSelected:   #202020
GraphItemSelection:            #181818
GraphItemSelectionContrast:    BLACK
GraphItemContentsSelection:    #242424
GraphSnapLine:                 #ffff00

GraphFlyoutBackgroundFlagOn:   #171717
GraphFlyoutBackgroundFlagOff:  #101010
GraphFlyoutEdgeFlagOff:        #202020
GraphFlyoutInfo:               #1c1c1c
GraphFlyoutWarning:            #4a3a1a
GraphFlyoutError:              #4a1a1a

GraphDotPinAccent:             #2a2a2a

GraphCop2PreviewBackground:    #111111
GraphCop2BottomButtonEnabled:  #111111

GraphVopConnectorGroupName:    WHITE
GraphVopConnectorBackground:   #262626
GraphVopBottomButtonEnabled:   #111111
GraphVopBottomButtonDisabled:  #666666

GraphShopConnectorBackground:  #111111

GraphSubnetShadow1:            BLACK
GraphSubnetShadowBlend1:       0.6
GraphSubnetShadow2:            WHITE
GraphSubnetShadowBlend2:       0.3

GraphErrorBadgeDot:            1.00 0.00 0.00
GraphChildErrorBadgeDot:       1.00 0.00 0.00
GraphWarningBadgeDot:          0.77 0.60 0.04
GraphMessageBadgeDot:          0.35 0.35 0.35
GraphCommentBadgeDot:          0.35 0.35 0.35
GraphNodeLockedBadgeDot:       0.45 0.45 0.45
GraphNodeUnloadBadgeDot:       0.60 0.65 0.73
GraphNodeHasDataBadgeDot:      0.45 0.75 0.45
GraphNeedsCookBadgeDot:        0.65 0.65 0.30
GraphHdaLockedBadgeDot:        0.43 0.47 0.48
GraphHdaUnlockedBadgeDot:      0.60 0.50 0.50
GraphHdaDelaySyncBadgeDot:     0.70 0.70 0.70
GraphTimeDependentBadgeDot:    0.50 0.60 0.40
GraphTagsBadgeDot:             0.35 0.35 0.35
GraphVexCachedBadgeDot:        #7a7a7a
GraphVexCachableBadgeDot:      #5a5a5a
GraphNotCompilableBadgeDot:    #8a7a5a
GraphConstraintsBadgeDot:      #7a8a5a
GraphKinematicsBadgeDot:       #8a6a5a
GraphHasTakeDataBadgeDot:      #797979
GraphNodeUnloadBadgeDot:       #8a7a7a
GraphNodeHasDataBadgeDot:      #7a7a8a
Graph64bitBadgeDot:            #7a6a8a
GraphPdgDynamicBadgeDot:       #8a7a9a
GraphUnloadedPayloadsBadgeDot: #8a7a5a
GraphPopulationMaskBadgeDot:   #7a5a7a
GraphDiveableBadgeDot:         #5a8a5a
GraphLoadFromDiskBadgeDot:     #bcbcbc
GraphPdgMQServerAuthBadgeDot:  #5a7a4a
GraphPdgMQClientsAuthBadgeDot: #5a7a4a

GraphPdgProgressOutline:       WHITE
GraphPdgProgressPrecook:       #324D59
GraphPdgProgressCooking:       #8a8a8a
GraphPdgProgressCooked:        #4D623F
GraphPdgProgressWarning:       #8a8a4a
GraphPdgProgressError:         #b84a4a
GraphPdgProgressIncomplete:    #666666

GraphPdgProgressErrorCircle:   #8a3a3a
GraphPdgProgressErrorFill:     #401010
GraphPdgProgressNormalFill:    #232323

GraphPdgSummaryBackground:         #2a2a2a
GraphPdgSummaryFilterOn:           #8a8a4a
GraphPdgSummaryWorkItemCooked:     #6a7a5a
GraphPdgSummaryWorkItemCooking:    #8a8a8a
GraphPdgSummaryWorkItemWaiting:    #777777
GraphPdgSummaryWorkItemUncooked:   #666666
GraphPdgSummaryWorkItemFailed:     #b84a4a
GraphPdgSummaryWorkItemCancelled:  #8a7a4a

GraphTaskGraphBackground:          #111111
GraphTaskGraphBorder:              #8a8a8a
GraphTaskGraphSeeMore:             #cfcfcf
GraphTaskGraphWorkItemCooked:      #6a7a5a
GraphTaskGraphWorkItemCached:      #6a7a5a
GraphTaskGraphWorkItemCooking:     #8a8a8a
GraphTaskGraphWorkItemWaiting:     #444444
GraphTaskGraphWorkItemUncooked:    #666666
GraphTaskGraphWorkItemFailed:      #b84a4a
GraphTaskGraphWorkItemCancelled:   #69511B
GraphTaskGraphWorkItemSelected:    #b5b5b5
GraphTaskGraphWorkItemHovered:     #d0d0d0
GraphTaskGraphWorkItemAncestor:    #8a8a8a
GraphTaskGraphWorkItemDescendant:  #9a9a9a
GraphTaskGraphNormalWire:          #b5b5b5
GraphTaskGraphMappedWire:          #9a9a9a
GraphTaskGraphIndirectWire:        #8a8a8a

GraphTaskGraphWorkItemPerfFast:    #5a8a6a
GraphTaskGraphWorkItemPerfMed:     #8a8a4a
GraphTaskGraphWorkItemPerfSlow:    #b87a4a
GraphTaskGraphWorkItemPerfNA:      #555555

GraphTaskGraphStatusBarFailed:     #b84a4a
GraphTaskGraphStatusBarCancelled:  #8a8a4a
GraphTaskGraphStatusBarCooked:     #6a7a5a
GraphTaskGraphStatusBarCooking:    #8a8a8a
GraphTaskGraphStatusBarWaiting:    #777777
GraphTaskGraphStatusBarEmpty:      #2a2a2a

GraphTaskGraphLogError:            #b84a4a
GraphTaskGraphLogWarning:          #8a8a4a

GraphTaskPageRect:                 #d8d8d8

GraphTopBottomButtonEnabled:       #111111
GraphTopBottomButtonDisabled:      #666666

GraphLopLayerOutline:              #8a8a8a
GraphLopLayerColor1:               0.30 0.30 0.30
GraphLopLayerColor2:               0.40 0.40 0.40
GraphLopLayerColor3:               0.50 0.50 0.50
GraphLopLayerColor4:               0.35 0.35 0.35
GraphLopLayerColor5:               0.45 0.45 0.45
GraphLopLayerColor6:               0.55 0.55 0.55
GraphLopLayerColor7:               0.30 0.30 0.30
GraphLopLayerColor8:               0.40 0.40 0.40
GraphLopLayerColor9:               0.50 0.50 0.50